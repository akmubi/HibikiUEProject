#pragma once
#include "CoreMinimal.h"
#include "EHbkFullScreenMovieManualStopType.h"
#include "EHbkTalkScreenTransition.h"
#include "GameRuleEndMovieDelegateDelegate.h"
#include "GameRuleMovieEventDelegateDelegate.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "Templates/SubclassOf.h"
#include "HbkFullScreenMoviePlay.generated.h"

class UHbkFullScreenMoviePlay;
class UHbkLevelSequencePlayer;
class UMediaPlayer;
class UMediaSource;
class UMediaTexture;
class UObject;
class UTexture2D;
class UTngUserWidget;

UCLASS(Blueprintable)
class HIBIKI_API UHbkFullScreenMoviePlay : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameRuleMovieEventDelegate OnStartMovie;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameRuleMovieEventDelegate OnMovieOpenFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameRuleEndMovieDelegate OnEndedMovie;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkLevelSequencePlayer* SequencePlayer;
    
public:
    UHbkFullScreenMoviePlay();

protected:
    UFUNCTION(BlueprintCallable)
    void Receive_OnStartMovie();
    
    UFUNCTION(BlueprintCallable)
    void PostScreenTransit();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkFullScreenMoviePlay* PlayFullScreenMovieWithST(UObject* WorldContextObject, UMediaPlayer* MPlayer, UMediaSource* MSource, UMediaTexture* MTexture, EHbkTalkScreenTransition InFuncType, float InDuration, EHbkTalkScreenTransition OutFuncType, float OutDuration, TSubclassOf<UTngUserWidget> WaterMarkWidgetClass, const FString& WaterMarkText);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkFullScreenMoviePlay* PlayFullScreenMovieBinkWithST(UObject* WorldContextObject, FName MovieInfoKey, EHbkFullScreenMovieManualStopType ManualStopType, UTexture2D* LoadImageTexture, EHbkTalkScreenTransition InFuncType, float InDuration, EHbkTalkScreenTransition OutFuncType, float OutDuration, TSubclassOf<UTngUserWidget> WaterMarkWidgetClass, const FString& WaterMarkText);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkFullScreenMoviePlay* PlayFullScreenMovieBinkWithAlpha(UObject* WorldContextObject, FName MovieInfoKey, UHbkLevelSequencePlayer* LevelSequencePlayer);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkFullScreenMoviePlay* PlayFullScreenMovieBink(UObject* WorldContextObject, FName MovieInfoKey, EHbkFullScreenMovieManualStopType ManualStopType, UTexture2D* LoadImageTexture);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkFullScreenMoviePlay* PlayFullScreenMovie(UObject* WorldContextObject, UMediaPlayer* MPlayer, UMediaSource* MSource, UMediaTexture* MTexture);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSkipedSequence();
    
    UFUNCTION(BlueprintCallable)
    void OnPreEndMovie(bool bSkip);
    
    UFUNCTION(BlueprintCallable)
    void OnEndMovie(bool bSkip);
    
};


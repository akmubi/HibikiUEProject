#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LevelSequencePlayer.h"
#include "MovieSceneSequencePlayer.h"
#include "Templates/SubclassOf.h"
#include "HbkLevelSequencePlayer.generated.h"

class UHbkSequencerWidget;

UCLASS(Blueprintable)
class HIBIKI_API UHbkLevelSequencePlayer : public ULevelSequencePlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovieSceneSequencePlayerEvent OnSkipToEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovieSceneSequencePlayerEvent OnPostStartedPlaying;
    
    UHbkLevelSequencePlayer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SkipToEndForBink();
    
    UFUNCTION(BlueprintCallable)
    void ShowSequencerWidget(FName WidgetName, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void ShowIngamePlayer(bool bCompletely);
    
    UFUNCTION(BlueprintCallable)
    void ShowBoundActors();
    
    UFUNCTION(BlueprintCallable)
    void RemoteEvent(FName EventName);
    
    UFUNCTION(BlueprintCallable)
    void HideSequencerWidget(FName WidgetName, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void HideIngamePlayer(bool bCompletely);
    
    UFUNCTION(BlueprintCallable)
    void HideAllSequencerWidget();
    
    UFUNCTION(BlueprintCallable)
    FFrameNumber GetSubTrackLabelFrameNumber(const FName& TrackName, const FString& InLabel);
    
    UFUNCTION(BlueprintCallable)
    FFrameNumber GetLabelFrameNumber(const FString& InLabel);
    
    UFUNCTION(BlueprintCallable)
    bool CreateSequencerWidget(FName WidgetName, TSubclassOf<UHbkSequencerWidget> SequencerWidgetClass);
    
};


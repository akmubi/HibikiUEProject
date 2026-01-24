#pragma once
#include "CoreMinimal.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkLvSeqActionDelegateDelegate.h"
#include "HbkFullScreenMoviePlayBySQ.generated.h"

class AHbkLevelSequenceActor;
class UHbkFullScreenMoviePlayBySQ;
class UHbkPlayFullscreenMovieOption;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkFullScreenMoviePlayBySQ : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkLvSeqActionDelegate OnFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkLevelSequenceActor> VideoLevelSequenceActor;
    
public:
    UHbkFullScreenMoviePlayBySQ();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkFullScreenMoviePlayBySQ* PlayFullScreenMovieBySQ(UObject* WorldContextObject, UHbkPlayFullscreenMovieOption* PlayOption);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSyncInitialize();
    
    UFUNCTION(BlueprintCallable)
    void OnSkipToEndLevelSeq();
    
    UFUNCTION(BlueprintCallable)
    void OnLeaveMap();
    
    UFUNCTION(BlueprintCallable)
    void OnGameUnPuase();
    
    UFUNCTION(BlueprintCallable)
    void OnGamePuase();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedLevelSeq();
    
};


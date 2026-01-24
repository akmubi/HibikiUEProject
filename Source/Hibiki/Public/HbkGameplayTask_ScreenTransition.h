#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "EHbkNote.h"
#include "EHbkTalkFadeColor.h"
#include "EHbkTalkScreenTransition.h"
#include "HbkGameplayTask_ScreenTransition.generated.h"

class UHbkGameplayTask_ScreenTransition;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_ScreenTransition : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskScreenTransitionDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskScreenTransitionDelegate OnHalfDuration;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskScreenTransitionDelegate OnFinished;
    
    UHbkGameplayTask_ScreenTransition(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_ScreenTransition* StartScreenTransitionWithNoteCounts(UObject* WorldContextObject, EHbkTalkScreenTransition TransitionFunc, EHbkNote FuncDurationNoteType, int32 FuncDurationNoteCounts, EHbkTalkFadeColor FuncColor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_ScreenTransition* StartScreenTransition(UObject* WorldContextObject, EHbkTalkScreenTransition TransitionFunc, float FuncDuration, EHbkTalkFadeColor FuncColor);
    
};


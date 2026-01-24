#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTask.h"
#include "EHbkGameplayTask_FlickGameEnvPhaseActivateMode.h"
#include "HbkGameplayTask_FlickGameEnvPhase.generated.h"

class UHbkGameplayTask_FlickGameEnvPhase;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_FlickGameEnvPhase : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskFlickGameEnvPhase_End);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskFlickGameEnvPhase_End OnEnd;
    
    UHbkGameplayTask_FlickGameEnvPhase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_FlickGameEnvPhase* EventBeginFlickGameEnvPhase(UObject* WorldContextObject, int32 ChangeCnt, EHbkGameplayTask_FlickGameEnvPhaseActivateMode FlickActivateMode0, FGameplayTagContainer FlickActivateTag0, FName FlickActivateCallSign0, int32 FlickActivateExtInt0, EHbkGameplayTask_FlickGameEnvPhaseActivateMode FlickActivateMode1, FGameplayTagContainer FlickActivateTag1, FName FlickActivateCallSign1, int32 FlickActivateExtInt1, float FlickWaitStartBaseTime, float FlickWaitStartRandomTime, float FlickBaseTime0, float FlickRandomTime0, float FlickBaseTime1, float FlickRandomTime1);
    
};


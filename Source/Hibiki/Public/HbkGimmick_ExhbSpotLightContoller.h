#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_ExhbSpotLightContollerFollower.h"
#include "HbkGimmick_ExhbSpotLightContoller.generated.h"

class AActor;

UCLASS(Blueprintable)
class AHbkGimmick_ExhbSpotLightContoller : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_ExhbSpotLightContollerFollower> Followers;
    
public:
    AHbkGimmick_ExhbSpotLightContoller(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopFollowing();
    
    UFUNCTION(BlueprintCallable)
    void StartFollowing(AActor* FollowActor, FName FollowBoneName);
    
};


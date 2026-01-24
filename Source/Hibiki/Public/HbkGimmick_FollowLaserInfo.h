#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_FollowLaserInfo.generated.h"

class UHbkSkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FHbkGimmick_FollowLaserInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkSkeletalMeshComponent> JointMeshComp;
    
    HIBIKI_API FHbkGimmick_FollowLaserInfo();
};


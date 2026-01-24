#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "HbkPathFollowingComponent.generated.h"

class UHbkEnemyAnimInstance;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkPathFollowingComponent : public UPathFollowingComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkEnemyAnimInstance* HbkCharacterAnimInstanceComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRootMotionNav;
    
public:
    UHbkPathFollowingComponent(const FObjectInitializer& ObjectInitializer);

};


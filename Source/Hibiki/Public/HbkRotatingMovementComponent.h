#pragma once
#include "CoreMinimal.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "HbkRotatingMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkRotatingMovementComponent : public URotatingMovementComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool localRotateFlag;
    
public:
    UHbkRotatingMovementComponent(const FObjectInitializer& ObjectInitializer);

};


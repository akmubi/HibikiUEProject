#pragma once
#include "CoreMinimal.h"
#include "HbkEm7500_ArmBase.h"
#include "HbkEm7510_ArmDownR.generated.h"

class UAkComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkEm7510_ArmDownR : public AHbkEm7500_ArmBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
public:
    AHbkEm7510_ArmDownR(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SpringArmComponent.h"
#include "HbkPlayerCameraLagInfo.h"
#include "HbkPlayerSpringArmComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkPlayerSpringArmComponent : public USpringArmComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLagFixedXYLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FHbkPlayerCameraLagInfo> CameraLagInfoMap;
    
public:
    UHbkPlayerSpringArmComponent(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "Templates/SubclassOf.h"
#include "HbkLaserRaticleComponent.generated.h"

class UHbkLaserRaticleWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkLaserRaticleComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OffsetDrawLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkLaserRaticleWidget> RaticleWidgetClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkLaserRaticleWidget* Widget;
    
public:
    UHbkLaserRaticleComponent(const FObjectInitializer& ObjectInitializer);

};


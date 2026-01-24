#pragma once
#include "CoreMinimal.h"
#include "HbkCostumeMeshComponent.h"
#include "HbkPlayerCostumeMeshComponent.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkPlayerCostumeMeshComponent : public UHbkCostumeMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UMaterialInterface*> BaseMaterialMap;
    
public:
    UHbkPlayerCostumeMeshComponent(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "HbkCostumeComponent.h"
#include "HbkPlayerWeaponCostumeComponent.generated.h"

class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkPlayerWeaponCostumeComponent : public UHbkCostumeComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SubCostume_DT;
    
public:
    UHbkPlayerWeaponCostumeComponent(const FObjectInitializer& ObjectInitializer);

};


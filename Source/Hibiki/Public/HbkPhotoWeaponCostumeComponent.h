#pragma once
#include "CoreMinimal.h"
#include "HbkCostumeComponent.h"
#include "HbkPhotoWeaponCostumeComponent.generated.h"

class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkPhotoWeaponCostumeComponent : public UHbkCostumeComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SubCostume_DT;
    
public:
    UHbkPhotoWeaponCostumeComponent(const FObjectInitializer& ObjectInitializer);

};


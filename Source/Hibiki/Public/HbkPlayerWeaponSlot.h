#pragma once
#include "CoreMinimal.h"
#include "EHbkPlayerWeaponSlotType.h"
#include "HbkPlayerWeaponSlot.generated.h"

class UHbkSkeletalMeshComponent;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkPlayerWeaponSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPlayerWeaponSlotType SlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkSkeletalMeshComponent> Mesh;
    
    FHbkPlayerWeaponSlot();
};


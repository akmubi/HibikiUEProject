#pragma once
#include "CoreMinimal.h"
#include "HbkPartnerAttackWeaponAnimSoftInfo.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FHbkPartnerAttackWeaponAnimSoftInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequenceBase> WeaponAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponSlotName;
    
    HIBIKI_API FHbkPartnerAttackWeaponAnimSoftInfo();
};


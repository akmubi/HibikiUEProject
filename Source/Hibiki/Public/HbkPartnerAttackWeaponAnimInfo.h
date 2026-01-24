#pragma once
#include "CoreMinimal.h"
#include "HbkPartnerAttackWeaponAnimInfo.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FHbkPartnerAttackWeaponAnimInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* WeaponAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponSlotName;
    
    HIBIKI_API FHbkPartnerAttackWeaponAnimInfo();
};


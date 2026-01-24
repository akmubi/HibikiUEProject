#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EHbkPlayerWeaponSlotType.h"
#include "HbkAnimNotify_PlayerSetWeaponAnim.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_PlayerSetWeaponAnim : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPlayerWeaponSlotType SlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* WeaponAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendOut;
    
public:
    UHbkAnimNotify_PlayerSetWeaponAnim();

};


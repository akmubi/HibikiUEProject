#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EHbkPartnerType.h"
#include "EHbkPlayerWeaponSlotType.h"
#include "HbkAnimNotifyState_ChangeAttachPlayerWeapon.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HIBIKI_API UHbkAnimNotifyState_ChangeAttachPlayerWeapon : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPlayerWeaponSlotType SlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NewAttachName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPartnerType AttachToPartner;
    
public:
    UHbkAnimNotifyState_ChangeAttachPlayerWeapon();

};


#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkEquipSlotVisibleInfo.h"
#include "HbkAnimNotify_SetVisibleEquip.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_SetVisibleEquip : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEquipSlotVisibleInfo> VisibleInfoList;
    
    UHbkAnimNotify_SetVisibleEquip();

};


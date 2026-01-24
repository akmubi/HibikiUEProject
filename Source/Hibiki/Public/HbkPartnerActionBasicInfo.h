#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHbkNote.h"
#include "HbkPartnerAttackWeaponAnimInfo.h"
#include "HbkPartnerActionBasicInfo.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FHbkPartnerActionBasicInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ActionTypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote BaseNoteLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* AppearAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* ActionAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* DisappearAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkPartnerAttackWeaponAnimInfo> WeaponAnimList;
    
    HIBIKI_API FHbkPartnerActionBasicInfo();
};


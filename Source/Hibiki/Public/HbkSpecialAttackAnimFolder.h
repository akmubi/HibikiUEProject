#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkSpecialAttackAnimFolder.generated.h"

class UAnimSequenceBase;
class UTexture2D;

USTRUCT(BlueprintType)
struct FHbkSpecialAttackAnimFolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag SpecialAttackTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* PlayerAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* PlayerWeaponAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* PartnerAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceBase*> PartnerWeaponAnimList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Sphere808_Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Cat808_Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* SpAttackInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* CutIn_NameTexture2D;
    
    HIBIKI_API FHbkSpecialAttackAnimFolder();
};


#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHbkPartnerType.h"
#include "EHbkSkillListStateType.h"
#include "HbkInventoryObject_PlayerItem.h"
#include "HbkInventoryObject_Skill.generated.h"

class UObject;
class UTexture2D;

UCLASS(Blueprintable)
class HIBIKI_API UHbkInventoryObject_Skill : public UHbkInventoryObject_PlayerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SkillDescMovieKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SkillInfoText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SkillInfoAppendText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SkillTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPartnerType PartnerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SpecialAttackIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SpecialAttackInvalidIcon;
    
    UHbkInventoryObject_Skill();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    EHbkSkillListStateType GetSkillListState(UObject* WorldContextObject) const;
    
};


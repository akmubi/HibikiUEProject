#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Templates/SubclassOf.h"
#include "HbkAnimNotify_TakeDamage2AllEnemies.generated.h"

class UDamageType;

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_TakeDamage2AllEnemies : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyDiffParam;
    
public:
    UHbkAnimNotify_TakeDamage2AllEnemies();

};


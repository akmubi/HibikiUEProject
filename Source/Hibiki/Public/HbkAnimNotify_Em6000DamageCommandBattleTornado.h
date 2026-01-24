#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Templates/SubclassOf.h"
#include "HbkAnimNotify_Em6000DamageCommandBattleTornado.generated.h"

class UDamageType;

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_Em6000DamageCommandBattleTornado : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> TornadoDamageType;
    
    UHbkAnimNotify_Em6000DamageCommandBattleTornado();

};


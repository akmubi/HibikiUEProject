#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DPartsBrokenDelegateDelegate.h"
#include "DPartsDamageDelegateDelegate.h"
#include "HbkDamagePartParam.h"
#include "Templates/SubclassOf.h"
#include "HbkDamagePartsComponent.generated.h"

class UHbkDamageParts;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkDamagePartsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDPartsBrokenDelegate OnPartsBroken;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDPartsDamageDelegate OnPartsDamage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkDamageParts> DamageParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkDamagePartParam> DamagePartsParamList;
    
public:
    UHbkDamagePartsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool RecoverBrokenPart(FName PartName, float RecoveryRate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBrokenPart(FName PartName) const;
    
};


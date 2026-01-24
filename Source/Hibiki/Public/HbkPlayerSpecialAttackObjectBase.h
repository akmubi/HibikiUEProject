#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkCharacter.h"
#include "HbkPlayerSpecialAttackObjectBase.generated.h"

class AActor;
class UHbkPlayerSPAObjGenerateComponent;

UCLASS(Blueprintable)
class AHbkPlayerSpecialAttackObjectBase : public AHbkCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObjDestoryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag SpAtkTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkPlayerSPAObjGenerateComponent> SpObjGenerateComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> TargetActor;
    
public:
    AHbkPlayerSpecialAttackObjectBase(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ActorActivateInterface.h"
#include "HbkDamageInterface.h"
#include "HbkNp0000_RD_CleanDelegateDelegate.h"
#include "HbkNp0000_RD_DestroyInfo_t.h"
#include "HbkNpcCharacter.h"
#include "HbkNp0000_RD_Clean.generated.h"

class AActor;
class AController;
class UAnimSequenceBase;
class UDamageType;

UCLASS(Blueprintable)
class AHbkNp0000_RD_Clean : public AHbkNpcCharacter, public IActorActivateInterface, public IHbkDamageInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkNp0000_RD_CleanDelegate OnDestroy;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkNp0000_RD_DestroyInfo_t DestroyInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* EscapeAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MoveVolumeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float moveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GoalDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackTime;
    
public:
    AHbkNp0000_RD_Clean(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnPostTakeDamage_RDClean(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void Np0000_RD_Destroy();
    

    // Fix for true pure virtual functions not being implemented
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "EmHintRoboExitNotifyDelegateDelegate.h"
#include "HbkEnemyCharacter.h"
#include "HbkMultiItemTickets.h"
#include "HbkRDNp0900_JumpEscapeParam.h"
#include "HbkRDNp0900_HintRobo.generated.h"

class AActor;
class AController;
class UAnimSequenceBase;
class UDamageType;
class UEnvQuery;

UCLASS(Blueprintable)
class AHbkRDNp0900_HintRobo : public AHbkEnemyCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmHintRoboExitNotifyDelegate OnExitNotify_Delegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExitField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* EscapeEnvQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* HintRoboDamageReactionAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* HintRoboExitAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkRDNp0900_JumpEscapeParam JumpEscapeParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExitHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InvincibleTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageReqToEscape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMultiItemTickets DropItemTicketsByDamge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMultiItemTickets DropItemTicketsByEscape;
    
public:
    AHbkRDNp0900_HintRobo(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void NotifyOnPostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExitField() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ExecuteEscapeEnvQuery();
    
    UFUNCTION(BlueprintCallable)
    void DisableInvinsible();
    
};


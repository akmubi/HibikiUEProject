#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "HbkMultiItemTickets.h"
#include "HbkNp0000_Clean.h"
#include "HbkTalkContext.h"
#include "HbkNp0000_St06_Clean.generated.h"

class AActor;
class AController;
class UDamageType;
class UDataTable;

UCLASS(Blueprintable)
class AHbkNp0000_St06_Clean : public AHbkNp0000_Clean {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TalkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartTalkLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartDamageTalkLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartAIDamageTalkLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartAIDamageEffortsLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TalkableInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMultiItemTickets ItemTickets;
    
public:
    AHbkNp0000_St06_Clean(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ResumeInteract();
    
    UFUNCTION(BlueprintCallable)
    void RecieveTalkSessionEnd(const FHbkTalkContext TalkContext);
    
    UFUNCTION(BlueprintCallable)
    void PauseInteract();
    
    UFUNCTION(BlueprintCallable)
    void OnPostTakeDamage_St06Clean(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnInteraction(AActor* Interactor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_AI_Tick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_AI_TakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_AI_BeginPlay();
    
};


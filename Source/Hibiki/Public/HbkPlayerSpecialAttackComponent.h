#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "HbkPlayerSpecialAttackComponent.generated.h"

class UHbkPlayerSpecialAttackParam;
class UTngUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkPlayerSpecialAttackComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkPlayerSpecialAttackParam* SpecialAttacParamAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EquipSlotMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentSlotNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTngUserWidget> SpAttackCutInWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpAttackSuccessSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpAttackFailedSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SPA910Tag;
    
public:
    UHbkPlayerSpecialAttackComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnStartRhythmScore();
    
    UFUNCTION(BlueprintCallable)
    void OnSpAttackObjLoadCompleted();
    
    UFUNCTION(BlueprintCallable)
    void OnSpAttackLoadCompleted();
    
    UFUNCTION(BlueprintCallable)
    void OnRhythmScoreResult(float TotalScoreRate);
    
    UFUNCTION(BlueprintCallable)
    void OnEndCombat();
    
    UFUNCTION(BlueprintCallable)
    void HideSpecialAttackCutIn(int32 NoteCount);
    
public:
    UFUNCTION(BlueprintCallable)
    bool EquipSpAttack(FGameplayTag SpAttackTag, int32 SlotIndex);
    
};


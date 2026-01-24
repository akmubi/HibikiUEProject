#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EHbkNote.h"
#include "HbkEqualizerWingAttackParam.h"
#include "HbkEqualizerWingAttackComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkEqualizerWingAttackComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEqualizerWingAttackParam> AttackParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote ActivateNoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActivateNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote AttackDurationNoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackDurationNoteCount;
    
public:
    UHbkEqualizerWingAttackComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TestNone();
    
    UFUNCTION(BlueprintCallable)
    void TestDeactivate();
    
    UFUNCTION(BlueprintCallable)
    void TestActivate();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetProcessNone();
    
    UFUNCTION(BlueprintCallable)
    void SetProcessDeactivate();
    
    UFUNCTION(BlueprintCallable)
    void SetProcessActivate();
    
    UFUNCTION(BlueprintCallable)
    void AddAllAttackInfo();
    
};


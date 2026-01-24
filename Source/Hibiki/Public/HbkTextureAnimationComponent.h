#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EHbkTextureAnimation_SaveType.h"
#include "HbkTextureAnimationExtIntInfo_t.h"
#include "HbkTextureAnimationMeshInfo_t.h"
#include "HbkTextureAnimationComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkTextureAnimationComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EHbkTextureAnimation_SaveType bSaveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 bSaveExtIntValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkTextureAnimationMeshInfo_t> DefaultInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkTextureAnimationMeshInfo_t> ActivateInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkTextureAnimationMeshInfo_t> DeactivateInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkTextureAnimationExtIntInfo_t> ActivateExtIntInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkTextureAnimationExtIntInfo_t> DeactivateExtIntInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkTextureAnimationMeshInfo_t> BeginBattleInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkTextureAnimationMeshInfo_t> EndBattleInfoArray;
    
public:
    UHbkTextureAnimationComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnWholeEvent_TAComp(int32 Count, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnHalfEvent_TAComp(int32 Count, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnGimmickComponentEndBattle();
    
    UFUNCTION(BlueprintCallable)
    void OnGimmickComponentDeactivateExtInt(AActor* Activator, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnGimmickComponentDeactivate(AActor* Activator);
    
    UFUNCTION(BlueprintCallable)
    void OnGimmickComponentBeginBattle();
    
    UFUNCTION(BlueprintCallable)
    void OnGimmickComponentActivateExtInt(AActor* Activator, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnGimmickComponentActivate(AActor* Activator);
    
    UFUNCTION(BlueprintCallable)
    void OnBeatEvent_TAComp(int32 Count, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void On8thEvent_TAComp(int32 Count, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void On16thEvent_TAComp(int32 Count, bool bDownBeat);
    
};


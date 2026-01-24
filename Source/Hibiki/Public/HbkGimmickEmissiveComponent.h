#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "EHbkGimmickEmissiveComp_EmType.h"
#include "HbkGimmickEmissiveInfo_t.h"
#include "HbkGimmickEmissiveLinkInfo_t.h"
#include "HbkGimmickEmissiveComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkGimmickEmissiveComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EHbkGimmickEmissiveComp_EmType SaveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 SaveExtInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DefaultActivateColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickEmissiveLinkInfo_t LinkInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickEmissiveInfo_t> EmissiveInfoArray;
    
public:
    UHbkGimmickEmissiveComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMoveEndEmissiveColor();
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultEmissiveColor();
    
    UFUNCTION(BlueprintCallable)
    void SetDeactivateEmissiveColor();
    
    UFUNCTION(BlueprintCallable)
    void SetActivateEmissiveColor();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnReturnCheckPointComponent(AActor* Activator, FName CPName);
    
    UFUNCTION(BlueprintCallable)
    void OnMoveEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnHitEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnHitBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
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
    void OnCommonResourceSuccess();
    
public:
    UFUNCTION(BlueprintCallable)
    void CopyGimmickEmissiveComp(AActor* pActor);
    
};


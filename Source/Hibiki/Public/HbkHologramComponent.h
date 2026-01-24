#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HologramOriginalMeshParam.h"
#include "HbkHologramComponent.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkHologramComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* HologramMI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TargetMeshComponentNameList;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* HologramMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHologramOriginalMeshParam> OriginalMeshParamList;
    
public:
    UHbkHologramComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void HologramEnable();
    
    UFUNCTION(BlueprintCallable)
    void HologramDisable();
    
    UFUNCTION(BlueprintCallable)
    void AddTargetMesh(TArray<UMeshComponent*> TargetMeshList);
    
};


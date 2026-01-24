#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkEm2000_PipeEquipPoint.generated.h"

class AHbkStaticMeshActor;

UCLASS(Blueprintable)
class HIBIKI_API AHbkEm2000_PipeEquipPoint : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCanBeObtained;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkStaticMeshActor> PipeMeshActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DotProductThreshold;
    
public:
    AHbkEm2000_PipeEquipPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Obtained(bool Enable);
    
};


#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkEm5000_EqualizerWaveWall.generated.h"

class UHbkStaticMeshComponent;

UCLASS(Blueprintable)
class AHbkEm5000_EqualizerWaveWall : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStaticMeshComponent* MeshComponent_Shape1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStaticMeshComponent* MeshComponent_Shape2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStaticMeshComponent* MeshComponent_Shape3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStaticMeshComponent* MeshComponent_Shape4;
    
public:
    AHbkEm5000_EqualizerWaveWall(const FObjectInitializer& ObjectInitializer);

};


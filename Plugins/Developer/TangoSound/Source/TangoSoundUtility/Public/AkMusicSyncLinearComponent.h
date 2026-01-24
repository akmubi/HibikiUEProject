#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "AkMusicSyncLinearComponent.generated.h"

class UAkMusicSyncComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TANGOSOUNDUTILITY_API UAkMusicSyncLinearComponent : public USplineComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkMusicSyncComponent* AkMusicSyncComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDraw;
    
    UAkMusicSyncLinearComponent(const FObjectInitializer& ObjectInitializer);

};


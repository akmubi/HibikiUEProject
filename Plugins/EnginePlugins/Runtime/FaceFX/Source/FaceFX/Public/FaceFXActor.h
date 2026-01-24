#pragma once
#include "CoreMinimal.h"
#include "EFaceFXActorBlendMode.h"
#include "FaceFXActorData.h"
#include "FaceFXAsset.h"
#include "FaceFXActor.generated.h"

class UFaceFXAnim;

UCLASS(Blueprintable)
class FACEFX_API UFaceFXActor : public UFaceFXAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFaceFXActorData> PlatformData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFaceFXActorData ActorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFaceFXAnim*> Animations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaceFXActorBlendMode BlendMode;
    
public:
    UFaceFXActor();

};


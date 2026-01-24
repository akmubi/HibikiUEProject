#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorActivateInterface.h"
#include "EHbkRPAreaType.h"
#include "HbkRPAreaAnchorParam.h"
#include "HbkRhythmParryAreaAnchor.generated.h"

class UBoxComponent;
class UCameraComponent;
class UHbkGameAgentComponent;
class UHbkSkeletalMeshComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkRhythmParryAreaAnchor : public AActor, public IActorActivateInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* PlayingArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGameAgentComponent* GameAgentComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSkeletalMeshComponent* EnemyDammy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSkeletalMeshComponent* PlayerDammy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* CamDammy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkRPAreaType PreviewType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkRPAreaType, FHbkRPAreaAnchorParam> ParamIDSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnStartEnable;
    
public:
    AHbkRhythmParryAreaAnchor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};


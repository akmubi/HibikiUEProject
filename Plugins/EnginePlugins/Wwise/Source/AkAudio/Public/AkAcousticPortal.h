#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/Volume.h"
#include "AkAcousticPortalState.h"
#include "AkAcousticPortal.generated.h"

class UAkRoomComponent;

UCLASS(Blueprintable)
class AKAUDIO_API AAkAcousticPortal : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AkAcousticPortalState InitialState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObstructionRefreshInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> ObstructionCollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CullingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFindFrontRoomWhenBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFindBackRoomWhenBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkRoomComponent* FrontRoomCmp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkRoomComponent* BackRoomCmp;
    
    AAkAcousticPortal(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OpenPortal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AkAcousticPortalState GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable)
    void ClosePortal();
    
};


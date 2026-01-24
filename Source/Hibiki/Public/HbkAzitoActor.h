#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "Engine/TargetPoint.h"
#include "ActorActivateInterface.h"
#include "HbkAzitoAreaCamContext.h"
#include "HbkAzitoCamContext.h"
#include "HbkAzitoNpcContext.h"
#include "HbkAzitoActor.generated.h"

class AActor;
class AHbkCameraActor;
class APlayerController;
class UHbkAzitoData;
class UHbkGameAgentComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkAzitoActor : public ATargetPoint, public IActorActivateInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkCameraActor> CameraPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkAzitoCamContext MainCameraSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FHbkAzitoAreaCamContext> AreaCameraSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FHbkAzitoNpcContext> NpcSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkAzitoData* AzitoData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGameAgentComponent* GameAgentComp;
    
public:
    AHbkAzitoActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void RecieveNpcTalkEnd(AActor* InTalker, const FName InTalkResultOption);
    
    UFUNCTION(BlueprintCallable)
    void RecieveNpcTalkCue(AActor* InTalker, const FName InTalkCue);
    
    UFUNCTION(BlueprintCallable)
    void RecieveNpcTalkBegin(AActor* InTalker);
    
public:
    UFUNCTION(BlueprintCallable)
    bool EndAzitoCamera(float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing);
    
    UFUNCTION(BlueprintCallable)
    void DeployContents(int32 StateNo);
    
    UFUNCTION(BlueprintCallable)
    bool BeginAzitoCameraVGW(APlayerController* Controller, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing, float MainCamDist);
    
    UFUNCTION(BlueprintCallable)
    bool BeginAzitoCamera(APlayerController* Controller, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing);
    

    // Fix for true pure virtual functions not being implemented
};


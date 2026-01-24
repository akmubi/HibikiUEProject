#pragma once
#include "CoreMinimal.h"
#include "CameraRig_Rail.h"
#include "UObject/NoExportTypes.h"
#include "Camera/PlayerCameraManager.h"
#include "GameplayTagContainer.h"
#include "ActorActivateInterface.h"
#include "EHbkCameraViewTargetAfterDeactive.h"
#include "EHbkNote.h"
#include "EHbkRailCamDir.h"
#include "HbkCameraInterface.h"
#include "HbkRailCamContext.h"
#include "HbkCameraRig_Rail.generated.h"

class AHbkCameraActor;
class AHbkCameraRig_Rail;
class APlayerController;
class UHbkGameAgentComponent;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API AHbkCameraRig_Rail : public ACameraRig_Rail, public IActorActivateInterface, public IHbkCameraInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkCameraActor> CameraPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RailGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkRailCamDir CameraDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator CameraBaseRotaion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FHbkRailCamContext> CameraSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkCameraRig_Rail> MasterRail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AHbkCameraRig_Rail>> RailGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote BlendInNoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BlendInNoteCounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EViewTargetBlendFunction> BlendInFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendInExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlendInLockOutgoing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkCameraViewTargetAfterDeactive BlendOutViewTargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote BlendOutNoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BlendOutNoteCounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EViewTargetBlendFunction> BlendOutFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendOutExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlendOutLockOutgoing;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGameAgentComponent* GameAgentComponent;
    
public:
    AHbkCameraRig_Rail(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetEnableRailCameraKeyByTag(UObject* WorldContextObject, const FGameplayTag RailCamTag, const FName callSign, const FName KeyGroupName, bool NewEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableRailCameraKey(const FName KeyGroupName, bool NewEnable);
    
    UFUNCTION(BlueprintCallable)
    bool EndRailCamera(float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing);
    
    UFUNCTION(BlueprintCallable)
    bool BeginRailCamera(APlayerController* Controller, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing);
    

    // Fix for true pure virtual functions not being implemented
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "HbkVS_StreamingViewer.generated.h"

class AHbkVS_StreamingViewerHUD;
class UBoxComponent;
class UDataTable;
class UHbkFollowPointComponent;
class UHbkPlayerCameraComponent;
class UHbkPlayerFocusComponent;
class UHbkPlayerSpringArmComponent;
class UHbkRhythmSynchroComponent;

UCLASS(Blueprintable)
class AHbkVS_StreamingViewer : public ACharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLookUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLookDown;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkFollowPointComponent* CameraPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPlayerSpringArmComponent* CameraBoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPlayerCameraComponent* FollowCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPlayerFocusComponent* TargetFocusVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* FocusVolumeBox;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* actionTable;
    
public:
    AHbkVS_StreamingViewer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SpawnSpEnemyRPCFunction(const FVector SpawnPos, const FRotator SpawnRot, const FText& UserName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SpawnEnemyRPCFunction(const FVector SpawnPos, const FRotator SpawnRot, const FText& UserName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SpawnCureItemRPCFunction(const FVector SpawnPos, const FRotator SpawnRot, const FText& userText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UHbkRhythmSynchroComponent* GetRhythmSynchro() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkVS_StreamingViewerHUD* GetHUD();
    
private:
    UFUNCTION(BlueprintCallable)
    void BeatEvent(const int32 BeatCount);
    
};


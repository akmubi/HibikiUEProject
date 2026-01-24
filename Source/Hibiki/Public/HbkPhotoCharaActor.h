#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkPhotoCharaEmoteInfo.h"
#include "HbkPhotoCharaPoseInfo.h"
#include "HbkPhotoCharaActor.generated.h"

class UCapsuleComponent;
class UHbkCostumeComponent;
class UHbkEquipComponent;
class UHbkSkeletalMeshComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkPhotoCharaActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkEquipComponent* HbkEquip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkCostumeComponent* HbkCostumeComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckGround;
    
public:
    AHbkPhotoCharaActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCharaRotYaw(float RotYaw);
    
    UFUNCTION(BlueprintCallable)
    void SetCharaPose(const FHbkPhotoCharaPoseInfo& PoseInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetCharaOffsetZ(float OffsetZ);
    
    UFUNCTION(BlueprintCallable)
    void SetCharaOffsetY(float OffsetY);
    
    UFUNCTION(BlueprintCallable)
    void SetCharaOffsetX(float OffsetX);
    
    UFUNCTION(BlueprintCallable)
    void SetCharaEmote(const FHbkPhotoCharaEmoteInfo& EmoteInfo);
    
    UFUNCTION(BlueprintCallable)
    void Blueprint_SetupChara();
    
};


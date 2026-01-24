#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EHbkCostumePart.h"
#include "EHbkPartnerType.h"
#include "HbkCostumeModelController.generated.h"

class AHbkCameraActor;
class AHbkCostumeWidgetModelActor;
class UHbkCostumeModelControllerAsset;
class UTexture;

UCLASS(Blueprintable)
class AHbkCostumeModelController : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkCostumeModelControllerAsset* ControllerParamAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AHbkCostumeWidgetModelActor*> ModelActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkCameraActor> CostumeWidgetCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkCostumeWidgetModelActor> SelectedModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> PlayerViewTarget;
    
public:
    AHbkCostumeModelController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWidgetInputState(bool bInput);
    
    UFUNCTION(BlueprintCallable)
    void RotateCharacter(float AddYaw);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkCostumeWidgetModelActor* GetSelectedChara() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkCameraActor* GetCostumeCamera() const;
    
    UFUNCTION(BlueprintCallable)
    UTexture* GetCopyBackBufferTexture();
    
    UFUNCTION(BlueprintCallable)
    void EndCopyBackBuffer();
    
    UFUNCTION(BlueprintCallable)
    bool ChangePart(EHbkCostumePart SelectPart);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeCharacter(EHbkPartnerType SelectChara, EHbkCostumePart SelectPart, bool bResetRotation);
    
    UFUNCTION(BlueprintCallable)
    void BeginCopyBackBuffer();
    
};


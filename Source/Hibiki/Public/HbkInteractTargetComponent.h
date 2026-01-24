#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SphereComponent.h"
#include "GameplayTagContainer.h"
#include "EHbkInteractIconType.h"
#include "ITInteractionDelegateDelegate.h"
#include "HbkInteractTargetComponent.generated.h"

class UAkAudioEvent;
class UHbkInteractIconWidget;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkInteractTargetComponent : public USphereComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FITInteractionDelegate OnInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ButtonImageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkInteractIconType InteractIconType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WidgetScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDrawRangeToPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PopupDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OffsetDrawLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAnytimeInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableInteractDuringAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> OnAppearSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pOnAppearSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> OnDisappearSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pOnDisappearSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> OnChangeIconSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pOnChangeIconSE;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkInteractIconWidget* Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag IconTypeTag;
    
public:
    UHbkInteractTargetComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPauseInteract(bool Pause);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractRequest(bool IsInteractRequest);
    
    UFUNCTION(BlueprintCallable)
    void SetHiddenWithPauseInteract(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetActivateInteract(bool Active);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEndedWidgetAnimation();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractWithinRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractPause() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractActive() const;
    
};


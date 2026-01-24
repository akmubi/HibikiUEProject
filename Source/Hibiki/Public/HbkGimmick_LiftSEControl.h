#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_LiftSEControl.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_LiftSEControl : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> CurveOnSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pCurveOnSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> CurveOffSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pCurveOffSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> FlickOnSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pFlickOnSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> FlickOffSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pFlickOffSE;
    
public:
    AHbkGimmick_LiftSEControl(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartFlickOnSE();
    
    UFUNCTION(BlueprintCallable)
    void StartFlickOffSE();
    
    UFUNCTION(BlueprintCallable)
    void StartCurveOnSE();
    
    UFUNCTION(BlueprintCallable)
    void StartCurveOffSE();
    
};


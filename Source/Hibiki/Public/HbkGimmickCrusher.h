#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmickCrusherState.h"
#include "EHbkGimmickCrusherType.h"
#include "HbkGimmickBase.h"
#include "HbkGimmickCrusher.generated.h"

class AHbkGimmick_SplineConveyor;

UCLASS(Blueprintable)
class AHbkGimmickCrusher : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmickCrusherType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkGimmick_SplineConveyor* SplineConveyor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmickCrusherState StartState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmickCrusherState FinishState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActivateCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePeripheralsInterlockParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpDonwCountSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DownDelayCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DownCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DownStayCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpDelayCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpStayCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLuggage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LayoutLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LayoutPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LayoutOffsetLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bSaved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bActive;
    
public:
    AHbkGimmickCrusher(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void RequestTransitionStateUp(int32 NoteCount, int32 InterlockCounter);
    
    UFUNCTION(BlueprintCallable)
    void RequestTransitionStateDown(int32 NoteCount);
    
    UFUNCTION(BlueprintCallable)
    void Layout();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInEditor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDown() const;
    
    UFUNCTION(BlueprintCallable)
    float GetUpPlayRate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkGimmickCrusherType GetType() const;
    
    UFUNCTION(BlueprintCallable)
    float GetDownPlayRate();
    
    UFUNCTION(BlueprintCallable)
    float GetBasePlayRate();
    
};


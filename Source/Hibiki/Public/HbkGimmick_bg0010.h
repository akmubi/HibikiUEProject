#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHbkGimmick_bg0010State.h"
#include "EHbkGimmick_bg0010Type.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_bg0010.generated.h"

class AHbkGimmick_SplineConveyor;

UCLASS(Blueprintable)
class AHbkGimmick_bg0010 : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkGimmick_SplineConveyor* SplineConveyor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmick_bg0010Type Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLuggage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LayoutLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LayoutPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LayoutOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LowerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoweredCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RepairCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RaiseCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RaisedCount;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmick_bg0010State PreviewState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bSaved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bActive;
    
public:
    AHbkGimmick_bg0010(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TransitionStateRepair(int32 InRepairNoteCount);
    
    UFUNCTION(BlueprintCallable)
    void TransitionStateRaise(int32 InRaiseNoteCount, int32 InterlockCounter);
    
    UFUNCTION(BlueprintCallable)
    void TransitionStateLower(int32 InLowerNoteCount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnimRepair();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnimRaise();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnimLower();
    
protected:
    UFUNCTION(BlueprintCallable)
    void Layout();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEditor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkGimmick_bg0010State GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRepairPlayRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRaisePlayRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLowerPlayRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBasePlayRate() const;
    
};


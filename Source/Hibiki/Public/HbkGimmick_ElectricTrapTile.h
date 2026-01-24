#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttackInterface.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_ElectricTrapTileAction.h"
#include "HbkGimmick_ElectricTrapTileInterlock.h"
#include "HbkGimmick_ElectricTrapTileLayout.h"
#include "HbkGimmick_ElectricTrapTilePattern.h"
#include "HbkGimmick_ElectricTrapTileSound.h"
#include "HbkPlayingLevelSeqInfo.h"
#include "Templates/SubclassOf.h"
#include "HbkGimmick_ElectricTrapTile.generated.h"

class AActor;
class AHbkGimmick_ElectricTrapFloor;
class AHbkGimmick_ElectricTrapGenerator;
class AHbkGimmick_ElectricTrapTile;

UCLASS(Blueprintable)
class AHbkGimmick_ElectricTrapTile : public AHbkGimmickBase, public IAttackInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDeactivateDelegate, AHbkGimmick_ElectricTrapTile*, ElectricTrapTile);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActivateDelegate, AHbkGimmick_ElectricTrapTile*, ElectricTrapTile);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActivateDelegate OnActivate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeactivateDelegate OnDeactivate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_ElectricTrapTileLayout Layout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_ElectricTrapTileInterlock Interlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_ElectricTrapTileAction Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_ElectricTrapTilePattern> Patterns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_ElectricTrapTileSound Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHbkGimmick_ElectricTrapFloor*> Floors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHbkGimmick_ElectricTrapGenerator*> Generators;
    
public:
    AHbkGimmick_ElectricTrapTile(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetGenerator(AActor* Object, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetFloor(AActor* Object, int32 X, int32 Y);
    
    UFUNCTION(BlueprintCallable)
    void OnStartLevelSequence(const FHbkPlayingLevelSeqInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void OnEndSpecialAttack();
    
    UFUNCTION(BlueprintCallable)
    void OnEndRhythmParryAttack();
    
    UFUNCTION(BlueprintCallable)
    void OnEndLevelSequence(const FHbkPlayingLevelSeqInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void OnEndJamComboAttack();
    
    UFUNCTION(BlueprintCallable)
    void OnBeginSpecialAttack(bool bIncludingCamera);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginRhythmParryAttack();
    
    UFUNCTION(BlueprintCallable)
    void OnBeginJamComboAttack();
    
    UFUNCTION(BlueprintCallable)
    void OnAttackStart(const FString& UserString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLayoutDivNumY() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLayoutDivNumX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetGeneratorTransform(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AHbkGimmick_ElectricTrapGenerator> GetGeneratorClass(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetFloorTransform(int32 X, int32 Y) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AHbkGimmick_ElectricTrapFloor> GetFloorClass(int32 X, int32 Y) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearGenerator();
    
    UFUNCTION(BlueprintCallable)
    void ClearFloor();
    

    // Fix for true pure virtual functions not being implemented
};


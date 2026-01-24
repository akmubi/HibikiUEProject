#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EHbkPositioningInTheDarkMaskType.h"
#include "HbkEm5000PositioningSection.h"
#include "HbkEm5000_PositioningInTheDark.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkEm5000_PositioningInTheDark : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RowSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ColumnSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RowCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ColumnCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SectionRowBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SectionRowEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SectionColumnBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SectionColumnEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SectionRowCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SectionColumnCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm5000PositioningSection> PositioningSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TestRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TestColumn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPositioningInTheDarkMaskType TestSectionMaskType;
    
public:
    AHbkEm5000_PositioningInTheDark(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TestSectionMaskFromPlayer();
    
    UFUNCTION(BlueprintCallable)
    void TestResetSectionMask();
    
    UFUNCTION(BlueprintCallable)
    void TestGetSectionForPlayer();
    
    UFUNCTION(BlueprintCallable)
    void TestGetRandomSectionPosition();
    
    UFUNCTION(BlueprintCallable)
    void TestGetPosition();
    
public:
    UFUNCTION(BlueprintCallable)
    void SectionMaskFromPlayer(EHbkPositioningInTheDarkMaskType MaskType);
    
    UFUNCTION(BlueprintCallable)
    void SectionMaskFormSectionNo(int32 SectionNo, EHbkPositioningInTheDarkMaskType MaskType);
    
    UFUNCTION(BlueprintCallable)
    void SectionMask(int32 Row, int32 Column);
    
    UFUNCTION(BlueprintCallable)
    void ResetSectionMask();
    
    UFUNCTION(BlueprintCallable)
    FVector GetSectionPosition(int32 SectionNo);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSectionNoFromPosition(FVector Position);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSectionNo(int32 Row, int32 Column);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRowSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRowCount() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetRow(FVector Position);
    
    UFUNCTION(BlueprintCallable)
    FVector GetRandomSectionPosition(EHbkPositioningInTheDarkMaskType MaskType);
    
    UFUNCTION(BlueprintCallable)
    FVector GetPosition(int32 Row, int32 Column);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetColumnSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetColumnCount() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetColumn(FVector Position);
    
};


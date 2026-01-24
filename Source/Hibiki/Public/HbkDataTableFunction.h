#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DamageReactionDataRow.h"
#include "HbkEnemyInitParamDataRow.h"
#include "HbkShotgridOutputRow.h"
#include "HbkDataTableFunction.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class HIBIKI_API UHbkDataTableFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHbkDataTableFunction();

    UFUNCTION(BlueprintCallable)
    static void RemoveRow(UDataTable* DataTable, FName RowName);
    
    UFUNCTION(BlueprintCallable)
    static void AddRowByShotgridImportTableRow(UDataTable* DataTable, FName RowName, FHbkShotgridOutputRow RowData);
    
    UFUNCTION(BlueprintCallable)
    static void AddRowByGameplayTagTableRow(UDataTable* DataTable, FName RowName, FName Tag, const FString& Description);
    
    UFUNCTION(BlueprintCallable)
    static void AddRowByEnemyInitParamDataRow(UDataTable* DataTable, FName RowName, FHbkEnemyInitParamDataRow RowData);
    
    UFUNCTION(BlueprintCallable)
    static void AddRowByDamageReactionDataRow(UDataTable* DataTable, FName RowName, FDamageReactionDataRow RowData);
    
};


endencies used to create a <see cref="T:Microsoft.EntityFrameworkCore.Storage.ValueConversion.ValueConverterSelector" />
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.Storage.ValueConversion.ValueConverterSelector.Select(System.Type,System.Type)">
            <summary>
                Returns the list of <see cref="T:Microsoft.EntityFrameworkCore.Storage.ValueConversion.ValueConverter" /> instances that can be
                used to convert the given model type. Converters nearer the front of
                the list should be used in preference to converters nearer the end.
            </summary>
            <param name="modelClrType"> The type for which a converter is needed. </param>
            <param name="providerClrType"> The database provider type to target, or null for any. </param>
            <returns> The converters available. </returns>
        </member>
        <member name="T:Microsoft.EntityFrameworkCore.Storage.ValueConversion.ValueConverter`2">
            <summary>
                Defines conversions from an object of one type in a model to an object of the same or
                different type in the store.
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.Storage.ValueConversion.ValueConverter`2.#ctor(System.Linq.Expressions.Expression{System.Func{`0,`1}},System.Linq.Expressions.Expression{System.Func{`1,`0}},Microsoft.EntityFrameworkCore.Storage.ValueConversion.ConverterMappingHints)">
            <summary>
                Initializes a new instance of the <see cref="T:Microsoft.EntityFrameworkCore.Storage.ValueConversion.ValueConverter`2" /> class.
            </summary>
            <param name="convertToProviderExpression"> An expression to convert objects when writing data to the store. </param>
            <param name="convertFromProviderExpression"> An expression to convert objects when reading data from the store. </param>
            <param name="mappingHints">
                Hints that can be used by the <see cref="T:Microsoft.EntityFrameworkCore.Storage.ITypeMappingSource" /> to create data types with appropriate
                facets for the converted data.
            </param>
        </member>
        <member name="P:Microsoft.EntityFrameworkCore.Storage.ValueConversion.ValueConverter`2.ConvertToProvider">
            <summary>
                Gets the function to convert objects when writing data to the store,
                setup to handle nulls, boxing, and non-exact matches of simple types.
            </summary>
        </member>
        <member name="P:Microsoft.EntityFrameworkCore.Storage.ValueConversion.ValueConverter`2.ConvertFromProvider">
            <summary>
                Gets the function to convert objects when reading data from the store,
                setup to handle nulls, boxing, and non-exact matches of simple types.
            </summary>
        </member>
        <member name="P:Microsoft.EntityFrameworkCore.Storage.ValueConversion.ValueConverter`2.ConvertToProviderExpression">
            <summary>
                Gets the expression to convert objects when writing data to the store,
                exactly as supplied and may not handle
                nulls, boxing, and non-exact matches of simple types.
            </summary>
        </member>
        <member name="P:Microsoft.EntityFrameworkCore.Storage.ValueConversion.ValueConverter`2.ConvertFromProviderExpression">
            <summary>
                Gets the expression to convert objects when reading data from the store,
                exactly as supplied and may not handle
                nulls, boxing, and non-exact matches of simple types.
            </summary>
        </member>
        <member name="P:Microsoft.EntityFrameworkCore.Storage.ValueConversion.ValueConverter`2.ModelClrType">
            <summary>
                The CLR type used in the EF model.
            </summary>
        </member>
        <member name="P:Microsoft.EntityFrameworkCore.Storage.ValueConversion.ValueConverter`2.ProviderClrType">
            <summary>
                The CLR type used when reading and writing from the store.
            </summary>
        </member>
        <member name="T:Microsoft.EntityFrameworkCore.Update.Internal.UpdateEntryExtensions">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.Update.Internal.UpdateEntryExtensions.BuildCurrentValuesString(Microsoft.EntityFrameworkCore.Update.IUpdateEntry,System.Collections.Generic.IEnumerable{Microsoft.EntityFrameworkCore.Metadata.IPropertyBase})">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.Update.Internal.UpdateEntryExtensions.BuildOriginalValuesString(Microsoft.EntityFrameworkCore.Update.IUpdateEntry,System.Collections.Generic.IEnumerable{Microsoft.EntityFrameworkCore.Metadata.IPropertyBase})">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="T:Microsoft.EntityFrameworkCore.Update.IUpdateEntry">
            <summary>
                <para>
                    The information passed to a database provider to save changes to an entity to the database.
                </para>
                <para>
                    This interface is typically used by database providers (and other extensions). It is generally
                    not used in application code.
                </para>
            </summary>
        </member>
        <member name="P:Microsoft.EntityFrameworkCore.Update.IUpdateEntry.EntityType">
            <summary>
                The type of entity to be saved to the database.
            </summary>
        </member>
        <member name="P:Microsoft.EntityFrameworkCore.Update.IUpdateEntry.EntityState">
            <summary>
                The state of the entity to be saved.
            </summary>
        </member>
        <member name="P:Microsoft.EntityFrameworkCore.Update.IUpdateEntry.SharedIdentityEntry">
            <summary>
                The other entry that has the same key values, if one exists.
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.Update.IUpdateEntry.IsModified(Microsoft.EntityFrameworkCore.Metadata.IProperty)">
            <summary>
                Gets a value indicating if the specified property is modified. If true, the current value assigned
                to the property should be saved to the database.
            </summary>
            <param name="property"> The property to be checked. </param>
            <returns> True if the property is modified, otherwise false. </returns>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.Update.IUpdateEntry.HasTemporaryValue(Microsoft.EntityFrameworkCore.Metadata.IProperty)">
            <summary>
                Gets a value indicating if the specified property has a temporary value.
            </summary>
            <param name="property"> The property to be checked. </param>
            <returns> True if the property has a temporary value, otherwise false. </returns>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.Update.IUpdateEntry.IsStoreGenerated(Microsoft.EntityFrameworkCore.Metadata.IProperty)">
            <summary>
                Gets a value indicating if the specified property should have a value generated by the database.
            </summary>
            <param name="property"> The property to be checked. </param>
            <returns> True if the property should have a value generated by the database, otherwise false. </returns>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.Update.IUpdateEntry.GetCurrentValue(Microsoft.EntityFrameworkCore.Metadata.IPropertyBase)">
            <summary>
                Gets the value assigned to the property.
            </summary>
            <param name="propertyBase"> The property to get the value for. </param>
            <returns> The value for the property. </returns>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.Update.IUpdateEntry.GetOriginalValue(Microsoft.EntityFrameworkCore.Metadata.IPropertyBase)">
            <summary>
                Gets the value assigned to the property when it was retrieved from the database.
            </summary>
            <param name="propertyBase"> The property to get the value for. </param>
            <returns> The value for the property. </returns>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.Update.IUpdateEntry.GetCurrentValue``1(Microsoft.EntityFrameworkCore.Metadata.IPropertyBase)">
            <summary>
                Gets the value assigned to the property.
            </summary>
            <param name="propertyBase"> The property to get the value for. </param>
            <typeparam name="TProperty"> The type of the property. </typeparam>
            <returns> The value for the property. </returns>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.Update.IUpdateEntry.GetOriginalValue``1(Microsoft.EntityFrameworkCore.Metadata.IProperty)">
            <summary>
                Gets the value assigned to the property when it was retrieved from the database.
            </summary>
            <param name="property"> The property to get the value for. </param>
            <typeparam name="TProperty"> The type of the property. </typeparam>
            <returns> The value for the property. </returns>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.Update.IUpdateEntry.SetCurrentValue(Microsoft.EntityFrameworkCore.Metadata.IPropertyBase,System.Object)">
            <summary>
                Assign the given value to the property.
            </summary>
            <param name="propertyBase"> The property to set the value for. </param>
            <param name="value"> The value to set. </param>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.Update.IUpdateEntry.ToEntityEntry">
            <summary>
                Gets an <see cref="T:Microsoft.EntityFrameworkCore.ChangeTracking.EntityEntry" /> for the entity being saved. <see cref="T:Microsoft.EntityFrameworkCore.ChangeTracking.EntityEntry" /> is an API optimized for
                application developers and <see cref="T:Microsoft.EntityFrameworkCore.Update.IUpdateEntry" /> is optimized for database providers, but there may be instances
                where a database provider wants to access information from <see cref="T:Microsoft.EntityFrameworkCore.ChangeTracking.EntityEntry" />.
            </summary>
            <returns> An <see cref="T:Microsoft.EntityFrameworkCore.ChangeTracking.EntityEntry" /> for this entity. </returns>
        </member>
        <member name="T:Microsoft.EntityFrameworkCore.ValueGeneration.GuidValueGenerator">
            <summary>
                Generates <see cref="T:System.Guid" /> values using <see cref="M:System.Guid.NewGuid" />.
                The generated values are non-temporary, meaning they will be saved to the database.
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.GuidValueGenerator.Next(Microsoft.EntityFrameworkCore.ChangeTracking.EntityEntry)">
            <summary>
                Gets a value to be assigned to a property.
            </summary>
            <para>The change tracking entry of the entity for which the value is being generated.</para>
            <returns> The value to be assigned to a property. </returns>
        </member>
        <member name="P:Microsoft.EntityFrameworkCore.ValueGeneration.GuidValueGenerator.GeneratesTemporaryValues">
            <summary>
                Gets a value indicating whether the values generated are temporary or permanent. This implementation
                always returns false, meaning the generated values will be saved to the database.
            </summary>
        </member>
        <member name="T:Microsoft.EntityFrameworkCore.ValueGeneration.HiLoValueGenerator`1">
            <summary>
                <para>
                    Acts as a <see cref="T:Microsoft.EntityFrameworkCore.ValueGeneration.ValueGenerator" />  by requesting a block of values from the
                    underlying database and returning them one by one. Will ask the underlying
                    database for another block when the current block is exhausted.
                </para>
                <para>
                    A block is represented by a low value fetched from the database, and then a block size
                    that indicates how many sequential values can be used, starting from the low value, before
                    a new low value must be fetched from the database.
                </para>
            </summary>
            <typeparam name="TValue"> The type of values that are generated. </typeparam>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.HiLoValueGenerator`1.#ctor(Microsoft.EntityFrameworkCore.ValueGeneration.HiLoValueGeneratorState)">
            <summary>
                Initializes a new instance of the <see cref="T:Microsoft.EntityFrameworkCore.ValueGeneration.HiLoValueGenerator`1" /> class.
            </summary>
            <param name="generatorState"> The state used to keep track of which value to return next. </param>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.HiLoValueGenerator`1.Next(Microsoft.EntityFrameworkCore.ChangeTracking.EntityEntry)">
            <summary>
                Gets a value to be assigned to a property.
            </summary>
            <para>The change tracking entry of the entity for which the value is being generated.</para>
            <returns> The value to be assigned to a property. </returns>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.HiLoValueGenerator`1.NextAsync(Microsoft.EntityFrameworkCore.ChangeTracking.EntityEntry,System.Threading.CancellationToken)">
            <summary>
                Gets a value to be assigned to a property.
            </summary>
            <para>The change tracking entry of the entity for which the value is being generated.</para>
            <returns> The value to be assigned to a property. </returns>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.HiLoValueGenerator`1.GetNewLowValue">
            <summary>
                Gets the low value for the next block of values to be used.
            </summary>
            <returns> The low value for the next block of values to be used. </returns>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.HiLoValueGenerator`1.GetNewLowValueAsync(System.Threading.CancellationToken)">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="T:Microsoft.EntityFrameworkCore.ValueGeneration.HiLoValueGeneratorState">
            <summary>
                The thread safe state used by <see cref="T:Microsoft.EntityFrameworkCore.ValueGeneration.HiLoValueGenerator`1" />.
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.HiLoValueGeneratorState.#ctor(System.Int32)">
            <summary>
                Initializes a new instance of the <see cref="T:Microsoft.EntityFrameworkCore.ValueGeneration.HiLoValueGeneratorState" /> class.
            </summary>
            <param name="blockSize">
                The number of sequential values that can be used, starting from the low value, before
                a new low value must be fetched from the database.
            </param>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.HiLoValueGeneratorState.Next``1(System.Func{System.Int64})">
            <summary>
                Gets a value to be assigned to a property.
            </summary>
            <typeparam name="TValue"> The type of values being generated. </typeparam>
            <param name="getNewLowValue">
                A function to get the next low value if needed.
            </param>
            <returns> The value to be assigned to a property. </returns>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.HiLoValueGeneratorState.NextAsync``1(System.Func{System.Threading.CancellationToken,System.Threading.Tasks.Task{System.Int64}},System.Threading.CancellationToken)">
            <summary>
                Gets a value to be assigned to a property.
            </summary>
            <typeparam name="TValue"> The type of values being generated. </typeparam>
            <param name="getNewLowValue">
                A function to get the next low value if needed.
            </param>
            <param name="cancellationToken">A <see cref="T:System.Threading.CancellationToken" /> to observe while waiting for the task to complete.</param>
            <returns> The value to be assigned to a property. </returns>
        </member>
        <member name="T:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.BinaryValueGenerator">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.BinaryValueGenerator.#ctor(System.Boolean)">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="P:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.BinaryValueGenerator.GeneratesTemporaryValues">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.BinaryValueGenerator.Next(Microsoft.EntityFrameworkCore.ChangeTracking.EntityEntry)">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="T:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.StringValueGenerator">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.StringValueGenerator.#ctor(System.Boolean)">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="P:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.StringValueGenerator.GeneratesTemporaryValues">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.StringValueGenerator.Next(Microsoft.EntityFrameworkCore.ChangeTracking.EntityEntry)">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="T:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.TemporaryByteValueGenerator">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.TemporaryByteValueGenerator.Next(Microsoft.EntityFrameworkCore.ChangeTracking.EntityEntry)">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="T:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.TemporaryCharValueGenerator">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.TemporaryCharValueGenerator.Next(Microsoft.EntityFrameworkCore.ChangeTracking.EntityEntry)">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="T:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.TemporaryDateTimeOffsetValueGenerator">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.TemporaryDateTimeOffsetValueGenerator.Next(Microsoft.EntityFrameworkCore.ChangeTracking.EntityEntry)">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="P:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.TemporaryDateTimeOffsetValueGenerator.GeneratesTemporaryValues">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="T:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.TemporaryDateTimeValueGenerator">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.TemporaryDateTimeValueGenerator.Next(Microsoft.EntityFrameworkCore.ChangeTracking.EntityEntry)">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="P:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.TemporaryDateTimeValueGenerator.GeneratesTemporaryValues">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="T:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.TemporaryDecimalValueGenerator">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.TemporaryDecimalValueGenerator.Next(Microsoft.EntityFrameworkCore.ChangeTracking.EntityEntry)">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="T:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.TemporaryDoubleValueGenerator">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.TemporaryDoubleValueGenerator.Next(Microsoft.EntityFrameworkCore.ChangeTracking.EntityEntry)">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="T:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.TemporaryFloatValueGenerator">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.TemporaryFloatValueGenerator.Next(Microsoft.EntityFrameworkCore.ChangeTracking.EntityEntry)">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="T:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.TemporaryIntValueGenerator">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.TemporaryIntValueGenerator.Next(Microsoft.EntityFrameworkCore.ChangeTracking.EntityEntry)">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="T:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.TemporaryLongValueGenerator">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.TemporaryLongValueGenerator.Next(Microsoft.EntityFrameworkCore.ChangeTracking.EntityEntry)">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="T:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.TemporaryNumberValueGenerator`1">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="P:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.TemporaryNumberValueGenerator`1.GeneratesTemporaryValues">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="T:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.TemporaryNumberValueGeneratorFactory">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.TemporaryNumberValueGeneratorFactory.Create(Microsoft.EntityFrameworkCore.Metadata.IProperty)">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="T:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.TemporarySByteValueGenerator">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.TemporarySByteValueGenerator.Next(Microsoft.EntityFrameworkCore.ChangeTracking.EntityEntry)">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="T:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.TemporaryShortValueGenerator">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.TemporaryShortValueGenerator.Next(Microsoft.EntityFrameworkCore.ChangeTracking.EntityEntry)">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="T:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.TemporaryUIntValueGenerator">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.TemporaryUIntValueGenerator.Next(Microsoft.EntityFrameworkCore.ChangeTracking.EntityEntry)">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="T:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.TemporaryULongValueGenerator">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.TemporaryULongValueGenerator.Next(Microsoft.EntityFrameworkCore.ChangeTracking.EntityEntry)">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="T:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.TemporaryUShortValueGenerator">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.Internal.TemporaryUShortValueGenerator.Next(Microsoft.EntityFrameworkCore.ChangeTracking.EntityEntry)">
            <summary>
                This API supports the Entity Framework Core infrastructure and is not intended to be used
                directly from your code. This API may change or be removed in future releases.
            </summary>
        </member>
        <member name="T:Microsoft.EntityFrameworkCore.ValueGeneration.IValueGeneratorCache">
            <summary>
                <para>
                    Keeps a cache of value generators for properties.
                </para>
                <para>
                    This type is typically used by database providers (and other extensions). It is generally
                    not used in application code.
                </para>
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.IValueGeneratorCache.GetOrAdd(Microsoft.EntityFrameworkCore.Metadata.IProperty,Microsoft.EntityFrameworkCore.Metadata.IEntityType,System.Func{Microsoft.EntityFrameworkCore.Metadata.IProperty,Microsoft.EntityFrameworkCore.Metadata.IEntityType,Microsoft.EntityFrameworkCore.ValueGeneration.ValueGenerator})">
            <summary>
                Gets the existing value generator from the cache, or creates a new one if one is not present in
                the cache.
            </summary>
            <param name="property"> The property to get the value generator for. </param>
            <param name="entityType">
                The entity type that the value generator will be used for. When called on inherited properties on derived entity types,
                this entity type may be different from the declared entity type on <paramref name="property" />
            </param>
            <param name="factory"> Factory to create a new value generator if one is not present in the cache. </param>
            <returns> The existing or newly created value generator. </returns>
        </member>
        <member name="T:Microsoft.EntityFrameworkCore.ValueGeneration.IValueGeneratorSelector">
            <summary>
                <para>
                    Selects value generators to be used to generate values for properties of entities.
                </para>
                <para>
                    This type is typically used by database providers (and other extensions). It is generally
                    not used in application code.
                </para>
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.IValueGeneratorSelector.Select(Microsoft.EntityFrameworkCore.Metadata.IProperty,Microsoft.EntityFrameworkCore.Metadata.IEntityType)">
            <summary>
                Selects the appropriate value generator for a given property.
            </summary>
            <param name="property"> The property to get the value generator for. </param>
            <param name="entityType">
                The entity type that the value generator will be used for. When called on inherited properties on derived entity types,
                this entity type may be different from the declared entity type on <paramref name="property" />
            </param>
            <returns> The value generator to be used. </returns>
        </member>
        <member name="T:Microsoft.EntityFrameworkCore.ValueGeneration.SequentialGuidValueGenerator">
            <summary>
                Generates sequential <see cref="T:System.Guid" /> values using the same algorithm as NEWSEQUENTIALID()
                in Microsoft SQL Server. This is useful when entities are being saved to a database where sequential
                GUIDs will provide a performance benefit. The generated values are non-temporary, meaning they will
                be saved to the database.
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.SequentialGuidValueGenerator.Next(Microsoft.EntityFrameworkCore.ChangeTracking.EntityEntry)">
            <summary>
                Gets a value to be assigned to a property.
            </summary>
            <para>The change tracking entry of the entity for which the value is being generated.</para>
            <returns> The value to be assigned to a property. </returns>
        </member>
        <member name="P:Microsoft.EntityFrameworkCore.ValueGeneration.SequentialGuidValueGenerator.GeneratesTemporaryValues">
            <summary>
                Gets a value indicating whether the values generated are temporary or permanent. This implementation
                always returns false, meaning the generated values will be saved to the database.
            </summary>
        </member>
        <member name="T:Microsoft.EntityFrameworkCore.ValueGeneration.TemporaryGuidValueGenerator">
            <summary>
                Generates <see cref="T:System.Guid" /> values using <see cref="M:System.Guid.NewGuid" />.
                The generated values are temporary, meaning they will be replaced by database
                generated values when the entity is saved.
            </summary>
        </member>
        <member name="P:Microsoft.EntityFrameworkCore.ValueGeneration.TemporaryGuidValueGenerator.GeneratesTemporaryValues">
            <summary>
                Gets a value indicating whether the values generated are temporary or permanent. This implementation
                always returns true, meaning the generated values will be replaced by database generated values when
                the entity is saved
            </summary>
        </member>
        <member name="T:Microsoft.EntityFrameworkCore.ValueGeneration.ValueGenerator">
            <summary>
                Generates values for properties when an entity is added to a context.
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.ValueGenerator.Next(Microsoft.EntityFrameworkCore.ChangeTracking.EntityEntry)">
            <summary>
                Gets a value to be assigned to a property.
            </summary>
            <para>The change tracking entry of the entity for which the value is being generated.</para>
            <returns> The value to be assigned to a property. </returns>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.ValueGenerator.NextValue(Microsoft.EntityFrameworkCore.ChangeTracking.EntityEntry)">
            <summary>
                Template method to be overridden by implementations to perform value generation.
            </summary>
            <para>The change tracking entry of the entity for which the value is being generated.</para>
            <returns> The generated value. </returns>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.ValueGenerator.NextAsync(Microsoft.EntityFrameworkCore.ChangeTracking.EntityEntry,System.Threading.CancellationToken)">
            <summary>
                Gets a value to be assigned to a property.
            </summary>
            <para>The change tracking entry of the entity for which the value is being generated.</para>
            <returns> The value to be assigned to a property. </returns>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.ValueGenerator.NextValueAsync(Microsoft.EntityFrameworkCore.ChangeTracking.EntityEntry,System.Threading.CancellationToken)">
            <summary>
                Template method to be overridden by implementations to perform value generation.
            </summary>
            <para>The change tracking entry of the entity for which the value is being generated.</para>
            <returns> The generated value. </returns>
        </member>
        <member name="P:Microsoft.EntityFrameworkCore.ValueGeneration.ValueGenerator.GeneratesTemporaryValues">
            <summary>
                <para>
                    Gets a value indicating whether the values generated are temporary (i.e they should be replaced
                    by database generated values when the entity is saved) or are permanent (i.e. the generated values
                    should be saved to the database).
                </para>
                <para>
                    An example of temporary value generation is generating negative numbers for an integer primary key
                    that are then replaced by positive numbers generated by the database when the entity is saved. An
                    example of permanent value generation are client-generated values for a <see cref="T:System.Guid" /> primary
                    key which are saved to the database.
                </para>
            </summary>
        </member>
        <member name="T:Microsoft.EntityFrameworkCore.ValueGeneration.ValueGeneratorCache">
            <summary>
                <para>
                    Keeps a cache of value generators for properties.
                </para>
                <para>
                    This type is typically used by database providers (and other extensions). It is generally
                    not used in application code.
                </para>
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.ValueGeneratorCache.#ctor(Microsoft.EntityFrameworkCore.ValueGeneration.ValueGeneratorCacheDependencies)">
            <summary>
                Initializes a new instance of the <see cref="T:Microsoft.EntityFrameworkCore.ValueGeneration.ValueGeneratorCache" /> class.
            </summary>
            <param name="dependencies"> Parameter object containing dependencies for this service. </param>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.ValueGeneratorCache.GetOrAdd(Microsoft.EntityFrameworkCore.Metadata.IProperty,Microsoft.EntityFrameworkCore.Metadata.IEntityType,System.Func{Microsoft.EntityFrameworkCore.Metadata.IProperty,Microsoft.EntityFrameworkCore.Metadata.IEntityType,Microsoft.EntityFrameworkCore.ValueGeneration.ValueGenerator})">
            <summary>
                Gets the existing value generator from the cache, or creates a new one if one is not present in
                the cache.
            </summary>
            <param name="property"> The property to get the value generator for. </param>
            <param name="entityType">
                The entity type that the value generator will be used for. When called on inherited properties on derived entity types,
                this entity type may be different from the declared entity type on <paramref name="property" />
            </param>
            <param name="factory"> Factory to create a new value generator if one is not present in the cache. </param>
            <returns> The existing or newly created value generator. </returns>
        </member>
        <member name="T:Microsoft.EntityFrameworkCore.ValueGeneration.ValueGeneratorCacheDependencies">
            <summary>
                <para>
                    Service dependencies parameter class for <see cref="T:Microsoft.EntityFrameworkCore.ValueGeneration.ValueGeneratorCache" />
                </para>
                <para>
                    This type is typically used by database providers (and other extensions). It is generally
                    not used in application code.
                </para>
                <para>
                    Do not construct instances of this class directly from either provider or application code as the
                    constructor signature may change as new dependencies are added. Instead, use this type in
                    your constructor so that an instance will be created and injected automatically by the
                    dependency injection container. To create an instance with some dependent services replaced,
                    first resolve the object from the dependency injection container, then replace selected
                    services using the 'With...' methods. Do not call the constructor at any point in this process.
                </para>
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.ValueGeneratorCacheDependencies.#ctor">
            <summary>
                <para>
                    Creates the service dependencies parameter object for a <see cref="T:Microsoft.EntityFrameworkCore.ValueGeneration.ValueGeneratorCache" />.
                </para>
                <para>
                    Do not call this constructor directly from either provider or application code as it may change
                    as new dependencies are added. Instead, use this type in your constructor so that an instance
                    will be created and injected automatically by the dependency injection container. To create
                    an instance with some dependent services replaced, first resolve the object from the dependency
                    injection container, then replace selected services using the 'With...' methods. Do not call
                    the constructor at any point in this process.
                </para>
            </summary>
        </member>
        <member name="T:Microsoft.EntityFrameworkCore.ValueGeneration.ValueGeneratorFactory">
            <summary>
                Base class for factories that create value generators.
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.ValueGeneratorFactory.Create(Microsoft.EntityFrameworkCore.Metadata.IProperty)">
            <summary>
                Creates a new value generator.
            </summary>
            <param name="property"> The property to create the value generator for. </param>
            <returns> The newly created value generator. </returns>
        </member>
        <member name="T:Microsoft.EntityFrameworkCore.ValueGeneration.ValueGeneratorSelector">
            <summary>
                <para>
                    Selects value generators to be used to generate values for properties of entities.
                </para>
                <para>
                    This type is typically used by database providers (and other extensions). It is generally
                    not used in application code.
                </para>
            </summary>
        </member>
        <member name="P:Microsoft.EntityFrameworkCore.ValueGeneration.ValueGeneratorSelector.Cache">
            <summary>
                The cache being used to store value generator instances.
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.ValueGeneratorSelector.#ctor(Microsoft.EntityFrameworkCore.ValueGeneration.ValueGeneratorSelectorDependencies)">
            <summary>
                Initializes a new instance of the <see cref="T:Microsoft.EntityFrameworkCore.ValueGeneration.ValueGeneratorSelector" /> class.
            </summary>
            <param name="dependencies"> Parameter object containing dependencies for this service. </param>
        </member>
        <member name="P:Microsoft.EntityFrameworkCore.ValueGeneration.ValueGeneratorSelector.Dependencies">
            <summary>
                Parameter object containing dependencies for this service.
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.ValueGeneratorSelector.Select(Microsoft.EntityFrameworkCore.Metadata.IProperty,Microsoft.EntityFrameworkCore.Metadata.IEntityType)">
            <summary>
                Selects the appropriate value generator for a given property.
            </summary>
            <param name="property"> The property to get the value generator for. </param>
            <param name="entityType">
                The entity type that the value generator will be used for. When called on inherited properties on derived entity types,
                this entity type may be different from the declared entity type on <paramref name="property" />
            </param>
            <returns> The value generator to be used. </returns>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.ValueGeneratorSelector.Create(Microsoft.EntityFrameworkCore.Metadata.IProperty,Microsoft.EntityFrameworkCore.Metadata.IEntityType)">
            <summary>
                Creates a new value generator for the given property.
            </summary>
            <param name="property"> The property to get the value generator for. </param>
            <param name="entityType">
                The entity type that the value generator will be used for. When called on inherited properties on derived entity types,
                this entity type may be different from the declared entity type on <paramref name="property" />
            </param>
            <returns> The newly created value generator. </returns>
        </member>
        <member name="T:Microsoft.EntityFrameworkCore.ValueGeneration.ValueGeneratorSelectorDependencies">
            <summary>
                <para>
                    Service dependencies parameter class for <see cref="T:Microsoft.EntityFrameworkCore.ValueGeneration.ValueGeneratorSelector" />
                </para>
                <para>
                    This type is typically used by database providers (and other extensions). It is generally
                    not used in application code.
                </para>
                <para>
                    Do not construct instances of this class directly from either provider or application code as the
                    constructor signature may change as new dependencies are added. Instead, use this type in
                    your constructor so that an instance will be created and injected automatically by the
                    dependency injection container. To create an instance with some dependent services replaced,
                    first resolve the object from the dependency injection container, then replace selected
                    services using the 'With...' methods. Do not call the constructor at any point in this process.
                </para>
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.ValueGeneratorSelectorDependencies.#ctor(Microsoft.EntityFrameworkCore.ValueGeneration.IValueGeneratorCache)">
            <summary>
                <para>
                    Creates the service dependencies parameter object for a <see cref="T:Microsoft.EntityFrameworkCore.ValueGeneration.ValueGeneratorSelector" />.
                </para>
                <para>
                    Do not call this constructor directly from either provider or application code as it may change
                    as new dependencies are added. Instead, use this type in your constructor so that an instance
                    will be created and injected automatically by the dependency injection container. To create
                    an instance with some dependent services replaced, first resolve the object from the dependency
                    injection container, then replace selected services using the 'With...' methods. Do not call
                    the constructor at any point in this process.
                </para>
            </summary>
            <param name="cache"> The cache to be used to store value generator instances. </param>
        </member>
        <member name="P:Microsoft.EntityFrameworkCore.ValueGeneration.ValueGeneratorSelectorDependencies.Cache">
            <summary>
                The cache being used to store value generator instances.
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.ValueGeneratorSelectorDependencies.With(Microsoft.EntityFrameworkCore.ValueGeneration.IValueGeneratorCache)">
            <summary>
                Clones this dependency parameter object with one service replaced.
            </summary>
            <param name="cache"> A replacement for the current dependency of this type. </param>
            <returns> A new parameter object with the given service replaced. </returns>
        </member>
        <member name="T:Microsoft.EntityFrameworkCore.ValueGeneration.ValueGenerator`1">
            <summary>
                Generates values for properties when an entity is added to a context.
            </summary>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.ValueGenerator`1.Next(Microsoft.EntityFrameworkCore.ChangeTracking.EntityEntry)">
            <summary>
                Template method to be overridden by implementations to perform value generation.
            </summary>
            <para>The change tracking entry of the entity for which the value is being generated.</para>
            <returns> The generated value. </returns>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.ValueGenerator`1.NextAsync(Microsoft.EntityFrameworkCore.ChangeTracking.EntityEntry,System.Threading.CancellationToken)">
            <summary>
                Template method to be overridden by implementations to perform value generation.
            </summary>
            <para>The change tracking entry of the entity for which the value is being generated.</para>
            <returns> The generated value. </returns>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.ValueGenerator`1.NextValue(Microsoft.EntityFrameworkCore.ChangeTracking.EntityEntry)">
            <summary>
                Gets a value to be assigned to a property.
            </summary>
            <para>The change tracking entry of the entity for which the value is being generated.</para>
            <returns> The value to be assigned to a property. </returns>
        </member>
        <member name="M:Microsoft.EntityFrameworkCore.ValueGeneration.ValueGenerator`1.NextValueAsync(Microsoft.EntityFrameworkCore.ChangeTracking.EntityEntry,System.Threading.CancellationToken)">
            <summary>
                Gets a value to be assigned to a property.
            </summary>
            <para>The change tracking entry of the entity for which the value is being generated.</para>
            <returns> The value to be assigned to a property. </returns>
        </member>
        <member name="T:Microsoft.EntityFrameworkCore.WarningBehavior">
            <summary>
                The runtime behavior of warnings generated by Entity Framework
            </summary>
        </member>
        <member name="F:Microsoft.EntityFrameworkCore.WarningBehavior.Log">
            <summary>
                A warning is logged.
            </summary>
        </member>
        <member name="F:Microsoft.EntityFrameworkCore.WarningBehavior.Ignore">
            <summary>
                No action is taken.
            </summary>
        </member>
        <member name="F:Microsoft.EntityFrameworkCore.WarningBehavior.Throw">
            <summary>
                An exception is thrown.
            </summary>
        </member>
        <member name="T:Microsoft.Extensions.DependencyInjection.EntityFrameworkServiceCollectionExtensions">
            <summary>
                Extension methods for setting up Entity Framework related services in an <see cref="T:Microsoft.Extensions.DependencyInjection.IServiceCollection" />.
            </summary>
        </member>
        <member name="M:Microsoft.Extensions.DependencyInjection.EntityFrameworkServiceCollectionExtensions.AddDbContext``1(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Action{Microsoft.EntityFrameworkCore.DbContextOptionsBuilder},Microsoft.Extensions.DependencyInjection.ServiceLifetime,Microsoft.Extensions.DependencyInjection.ServiceLifetime)">
            <summary>
                Registers the given context as a service in the <see cref="T:Microsoft.Extensions.DependencyInjection.IServiceCollection" />.
                You use this method when using dependency injection in your application, such as with ASP.NET.
                For more information on setting up dependency injection, see http://go.microsoft.com/fwlink/?LinkId=526890.
            </summary>
            <example>
                <code>
                      public void ConfigureServices(IServiceCollection services)
                      {
                          var connectionString = "connection string to database";
            
                          services.AddDbContext&lt;MyContext&gt;(options => options.UseSqlServer(connectionString));
                      }
                  </code>
            </example>
            <typeparam name="TContext"> The type of context to be registered. </typeparam>
            <param name="serviceCollection"> The <see cref="T:Microsoft.Extensions.DependencyInjection.IServiceCollection" /> to add services to. </param>
            <param name="optionsAction">
                <para>
                    An optional action to configure the <see cref="T:Microsoft.EntityFrameworkCore.DbContextOptions" /> for the context. This provides an
                    alternative to performing configuration of the context by overriding the
                    <see cref="M:Microsoft.EntityFrameworkCore.DbContext.OnConfiguring(Microsoft.EntityFrameworkCore.DbContextOptionsBuilder)" /> method in your derived context.
                </para>
                <para>
                    If an action is supplied here, the <see cref="M:Microsoft.EntityFrameworkCore.DbContext.OnConfiguring(Microsoft.EntityFrameworkCore.DbContextOptionsBuilder)" /> method will still be run if it has
                    been overridden on the derived context. <see cref="M:Microsoft.EntityFrameworkCore.DbContext.OnConfiguring(Microsoft.EntityFrameworkCore.DbContextOptionsBuilder)" /> configuration will be applied
                    in addition to configuration performed here.
                </para>
                <para>
                    In order for the options to be passed into your context, you need to expose a constructor on your context that takes
                    <see cref="T:Microsoft.EntityFrameworkCore.DbContextOptions`1" /> and passes it to the base constructor of <see cref="T:Microsoft.EntityFrameworkCore.DbContext" />.
                </para>
            </param>
            <param name="contextLifetime"> The lifetime with which to register the DbContext service in the container. </param>
            <param name="optionsLifetime"> The lifetime with which to register the DbContextOptions service in the container. </param>
            <returns>
                The same service collection so that multiple calls can be chained.
            </returns>
        </member>
        <member name="M:Microsoft.Extensions.DependencyInjection.EntityFrameworkServiceCollectionExtensions.AddDbContext``2(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Action{Microsoft.EntityFrameworkCore.DbContextOptionsBuilder},Microsoft.Extensions.DependencyInjection.ServiceLifetime,Microsoft.Extensions.DependencyInjection.ServiceLifetime)">
            <summary>
                Registers the given context as a service in the <see cref="T:Microsoft.Extensions.DependencyInjection.IServiceCollection" />.
                You use this method when using dependency injection in your application, such as with ASP.NET.
                For more information on setting up dependency injection, see http://go.microsoft.com/fwlink/?LinkId=526890.
            </summary>
            <example>
                <code>
                      public void ConfigureServices(IServiceCollection services)
                      {
                          var connectionString = "connection string to database";
            
                          services.AddDbContext&lt;MyContext&gt;(options => options.UseSqlServer(connectionString));
                      }
                  </code>
            </example>
            <typeparam name="TContextService"> The class or interface that will be used to resolve the context from the container. </typeparam>
            <typeparam name="TContextImplementation"> The concrete implementation type to create. </typeparam>
            <param name="serviceCollection"> The <see cref="T:Microsoft.Extensions.DependencyInjection.IServiceCollection" /> to add services to. </param>
            <param name="optionsAction">
                <para>
                    An optional action to configure the <see cref="T:Microsoft.EntityFrameworkCore.DbContextOptions" /> for the context. This provides an
                    alternative to performing configuration of the context by overriding the
                    <see cref="M:Microsoft.EntityFrameworkCore.DbContext.OnConfiguring(Microsoft.EntityFrameworkCore.DbContextOptionsBuilder)" /> method in your derived context.
                </para>
                <para>
                    If an action is supplied here, the <see cref="M:Microsoft.EntityFrameworkCore.DbContext.OnConfiguring(Microsoft.EntityFrameworkCore.DbContextOptionsBuilder)" /> method will still be run if it has
                    been overridden on the derived context. <see cref="M:Microsoft.EntityFrameworkCore.DbContext.OnConfiguring(Microsoft.EntityFrameworkCore.DbContextOptionsBuilder)" /> configuration will be applied
                    in addition to configuration performed here.
                </para>
                <para>
                    In order for the options to be passed into your context, you need to expose a constructor on your context that takes
                    <see cref="T:Microsoft.EntityFrameworkCore.DbContextOptions`1" /> and passes it to the base constructor of <see cref="T:Microsoft.EntityFrameworkCore.DbContext" />.
                </para>
            </param>
            <param name="contextLifetime"> The lifetime with which to register the DbContext service in the container. </param>
            <param name="optionsLifetime"> The lifetime with which to register the DbContextOptions service in the container. </param>
            <returns>
                The same service collection so that multiple calls can be chained.
            </returns>
        </member>
        <member name="M:Microsoft.Extensions.DependencyInjection.EntityFrameworkServiceCollectionExtensions.AddDbContextPool``1(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Action{Microsoft.EntityFrameworkCore.DbContextOptionsBuilder},System.Int32)">
            <summary>
                Registers the given context as a service in the <see cref="T:Microsoft.Extensions.DependencyInjection.IServiceCollection" /> and enables DbContext pooling.
                Instance pooling can increase throughput in high-scale scenarios such as web servers by re-using
                DbContext instances, rather than creating new instances for each request.
                You use this method when using dependency injection in your application, such as with ASP.NET.
                For more information on setting up dependency injection, see http://go.microsoft.com/fwlink/?LinkId=526890.
            </summary>
            <typeparam name="TContext"> The type of context to be registered. </typeparam>
            <param name="serviceCollection"> The <see cref="T:Microsoft.Extensions.DependencyInjection.IServiceCollection" /> to add services to. </param>
            <param name="optionsAction">
                <para>
                    A required action to configure the <see cref="T:Microsoft.EntityFrameworkCore.DbContextOptions" /> for the context. When using
                    context pooling, options configuration must be performed externally; <see cref="M:Microsoft.EntityFrameworkCore.DbContext.OnConfiguring(Microsoft.EntityFrameworkCore.DbContextOptionsBuilder)" />
                    will not be called.
                </para>
            </param>
            <param name="poolSize">
                Sets the maximum number of instances retained by the pool.
            </param>
            <returns>
                The same service collection so that multiple calls can be chained.
            </returns>
        </member>
        <member name="M:Microsoft.Extensions.DependencyInjection.EntityFrameworkServiceCollectionExtensions.AddDbContextPool``2(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Action{Microsoft.EntityFrameworkCore.DbContextOptionsBuilder},System.Int32)">
            <summary>
                Registers the given context as a service in the <see cref="T:Microsoft.Extensions.DependencyInjection.IServiceCollection" /> and enables DbContext pooling.
                Instance pooling can increase throughput in high-scale scenarios such as web servers by re-using
                DbContext instances, rather than creating new instances for each request.
                You use this method when using dependency injection in your application, such as with ASP.NET.
                For more information on setting up dependency injection, see http://go.microsoft.com/fwlink/?LinkId=526890.
            </summary>
            <typeparam name="TContextService"> The class or interface that will be used to resolve the context from the container. </typeparam>
            <typeparam name="TContextImplementation"> The concrete implementation type to create. </typeparam>
            <param name="serviceCollection"> The <see cref="T:Microsoft.Extensions.DependencyInjection.IServiceCollection" /> to add services to. </param>
            <param name="optionsAction">
                <para>
                    A required action to configure the <see cref="T:Microsoft.EntityFrameworkCore.DbContextOptions" /> for the context. When using
                    context pooling, options configuration must be performed externally; <see cref="M:Microsoft.EntityFrameworkCore.DbContext.OnConfiguring(Microsoft.EntityFrameworkCore.DbContextOptionsBuilder)" />
                    will not be called.
                </para>
            </param>
            <param name="poolSize">
                Sets the maximum number of instances retained by the pool.
            </param>
            <returns>
                The same service collection so that multiple calls can be chained.
            </returns>
        </member>
        <member name="M:Microsoft.Extensions.DependencyInjection.EntityFrameworkServiceCollectionExtensions.AddDbContextPool``1(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Action{System.IServiceProvider,Microsoft.EntityFrameworkCore.DbContextOptionsBuilder},System.Int32)">
            <summary>
                <para>
                    Registers the given context as a service in the <see cref="T:Microsoft.Extensions.DependencyInjection.IServiceCollection" /> and enables DbContext pooling.
                    Instance pooling can increase throughput in high-scale scenarios such as web servers by re-using
                    DbContext instances, rather than creating new instances for each request.
                    You use this method when using dependency injection in your application, such as with ASP.NET.
                    For more information on setting up dependency injection, see http://go.microsoft.com/fwlink/?LinkId=526890.
                </para>
                <para>
                    This overload has an <paramref name="optionsAction" /> that provides the applications <see cref="T:System.IServiceProvider" />.
                    This is useful if you want to setup Entity Framework to resolve its internal services from the primary application service
                    provider.
                    By default, we recommend using the other overload, which allows Entity Framework to create and maintain its own
                    <see cref="T:System.IServiceProvider" />
                    for internal Entity Framework services.
                </para>
            </summary>
            <typeparam name="TContext"> The type of context to be registered. </typeparam>
            <param name="serviceCollection"> The <see cref="T:Microsoft.Extensions.DependencyInjection.IServiceCollection" /> to add services to. </param>
            <param name="optionsAction">
                <para>
                    A required action to configure the <see cref="T:Microsoft.EntityFrameworkCore.DbContextOptions" /> for the context. When using
                    context pooling, options configuration must be performed externally; <see cref="M:Microsoft.EntityFrameworkCore.DbContext.OnConfiguring(Microsoft.EntityFrameworkCore.DbContextOptionsBuilder)" />
                    will not be called.
                </para>
            </param>
            <param name="poolSize">
                Sets the maximum number of instances retained by the pool.
            </param>
            <returns>
                The same service collection so that multiple calls can be chained.
            </returns>
        </member>
        <member name="M:Microsoft.Extensions.DependencyInjection.EntityFrameworkServiceCollectionExtensions.AddDbContextPool``2(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Action{System.IServiceProvider,Microsoft.EntityFrameworkCore.DbContextOptionsBuilder},System.Int32)">
            <summary>
                <para>
                    Registers the given context as a service in the <see cref="T:Microsoft.Extensions.DependencyInjection.IServiceCollection" /> and enables DbContext pooling.
                    Instance pooling can increase throughput in high-scale scenarios such as web servers by re-using
                    DbContext instances, rather than creating new instances for each request.
                    You use this method when using dependency injection in your application, such as with ASP.NET.
                    For more information on setting up dependency injection, see http://go.microsoft.com/fwlink/?LinkId=526890.
                </para>
                <para>
                    This overload has an <paramref name="optionsAction" /> that provides the applications <see cref="T:System.IServiceProvider" />.
                    This is useful if you want to setup Entity Framework to resolve its internal services from the primary application service
                    provider.
                    By default, we recommend using the other overload, which allows Entity Framework to create and maintain its own
                    <see cref="T:System.IServiceProvider" />
                    for internal Entity Framework services.
                </para>
            </summary>
            <typeparam name="TContextService"> The class or interface that will be used to resolve the context from the container. </typeparam>
            <typeparam name="TContextImplementation"> The concrete implementation type to create. </typeparam>
            <param name="serviceCollection"> The <see cref="T:Microsoft.Extensions.DependencyInjection.IServiceCollection" /> to add services to. </param>
            <param name="optionsAction">
                <para>
                    A required action to configure the <see cref="T:Microsoft.EntityFrameworkCore.DbContextOptions" /> for the context. When using
                    context pooling, options configuration must be performed externally; <see cref="M:Microsoft.EntityFrameworkCore.DbContext.OnConfiguring(Microsoft.EntityFrameworkCore.DbContextOptionsBuilder)" />
                    will not be called.
                </para>
            </param>
            <param name="poolSize">
                Sets the maximum number of instances retained by the pool.
            </param>
            <returns>
                The same service collection so that multiple calls can be chained.
            </returns>
        </member>
        <member name="M:Microsoft.Extensions.DependencyInjection.EntityFrameworkServiceCollectionExtensions.AddDbContext``1(Microsoft.Extensions.DependencyInjection.IServiceCollection,Microsoft.Extensions.DependencyInjection.ServiceLifetime,Microsoft.Extensions.DependencyInjection.ServiceLifetime)">
            <summary>
                Registers the given context as a service in the <see cref="T:Microsoft.Extensions.DependencyInjection.IServiceCollection" />.
                You use this method when using dependency injection in your application, such as with ASP.NET.
                For more information on setting up dependency injection, see http://go.microsoft.com/fwlink/?LinkId=526890.
            </summary>
            <example>
                <code>
                      public void ConfigureServices(IServiceCollection services)
                      {
                          var connectionString = "connection string to database";
            
                          services.AddDbContext&lt;MyContext&gt;(ServiceLifetime.Scoped);
                      }
                  </code>
            </example>
            <typeparam name="TContext"> The type of context to be registered. </typeparam>
            <param name="serviceCollection"> The <see cref="T:Microsoft.Extensions.DependencyInjection.IServiceCollection" /> to add services to. </param>
            <param name="contextLifetime"> The lifetime with which to register the DbContext service in the container. </param>
            <param name="optionsLifetime"> The lifetime with which to register the DbContextOptions service in the container. </param>
            <returns>
                The same service collection so that multiple calls can be chained.
            </returns>
        </member>
        <member name="M:Microsoft.Extensions.DependencyInjection.EntityFrameworkServiceCollectionExtensions.AddDbContext``2(Microsoft.Extensions.DependencyInjection.IServiceCollection,Microsoft.Extensions.DependencyInjection.ServiceLifetime,Microsoft.Extensions.DependencyInjection.ServiceLifetime)">
            <summary>
                Registers the given context as a service in the <see cref="T:Microsoft.Extensions.DependencyInjection.IServiceCollection" />.
                You use this method when using dependency injection in your application, such as with ASP.NET.
                For more information on setting up dependency injection, see http://go.microsoft.com/fwlink/?LinkId=526890.
            </summary>
            <example>
                <code>
                      public void ConfigureServices(IServiceCollection services)
                      {
                          var connectionString = "connection string to database";
            
                          services.AddDbContext&lt;MyContext&gt;(ServiceLifetime.Scoped);
                      }
                  </code>
            </example>
            <typeparam name="TContextService"> The class or interface that will be used to resolve the context from the container. </typeparam>
            <typeparam name="TContextImplementation"> The concrete implementation type to create. </typeparam>
            <param name="serviceCollection"> The <see cref="T:Microsoft.Extensions.DependencyInjection.IServiceCollection" /> to add services to. </param>
            <param name="contextLifetime"> The lifetime with which to register the DbContext service in the container. </param>
            <param name="optionsLifetime"> The lifetime with which to register the DbContextOptions service in the container. </param>
            <returns>
                The same service collection so that multiple calls can be chained.
            </returns>
        </member>
        <member name="M:Microsoft.Extensions.DependencyInjection.EntityFrameworkServiceCollectionExtensions.AddDbContext``1(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Action{System.IServiceProvider,Microsoft.EntityFrameworkCore.DbContextOptionsBuilder},Microsoft.Extensions.DependencyInjection.ServiceLifetime,Microsoft.Extensions.DependencyInjection.ServiceLifetime)">
            <summary>
                <para>
                    Registers the given context as a service in the <see cref="T:Microsoft.Extensions.DependencyInjection.IServiceCollection" />.
                    You use this method when using dependency injection in your application, such as with ASP.NET.
                    For more information on setting up dependency injection, see http://go.microsoft.com/fwlink/?LinkId=526890.
                </para>
                <para>
                    This overload has an <paramref name="optionsAction" /> that provides the applications <see cref="T:System.IServiceProvider" />.
                    This is useful if you want to setup Entity Framework to resolve its internal services from the primary application service
                    provider.
                    By default, we recommend using the other overload, which allows Entity Framework to create and maintain its own
                    <see cref="T:System.IServiceProvider" />
                    for internal Entity Framework services.
                </para>
            </summary>
            <example>
                <code>
                      publ
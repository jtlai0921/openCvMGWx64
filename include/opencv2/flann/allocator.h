ionsAction">
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
        <member name="M:Microsoft.Extensions.DependencyInjection.EntityFrameworkServiceCollectionExtensions.AddDbContext``2(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Action{System.IServiceProvider,Microsoft.EntityFrameworkCore.DbContextOptionsBuilder},Microsoft.Extensions.DependencyInjection.ServiceLifetime,Microsoft.Extensions.DependencyInjection.ServiceLifetime)">
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
                      public void ConfigureServices(IServiceCollection services)
                      {
                          var connectionString = "connection string to database";
            
                          services
                              .AddEntityFrameworkSqlServer()
                              .AddDbContext&lt;MyContext&gt;((serviceProvider, options) =>
                                  options.UseSqlServer(connectionString)
                                         .UseInternalServiceProvider(serviceProvider));
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
            <param